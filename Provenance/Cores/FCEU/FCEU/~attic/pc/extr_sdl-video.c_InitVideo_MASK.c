
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {int specialfs; int special; } ;
struct TYPE_15__ {scalar_t__ pixel_data; } ;
struct TYPE_14__ {TYPE_1__* format; int h; int w; } ;
struct TYPE_13__ {char* name; } ;
struct TYPE_12__ {scalar_t__ hw_available; } ;
struct TYPE_11__ {int BitsPerPixel; int Bmask; int Gmask; int Rmask; } ;
typedef TYPE_2__ SDL_VideoInfo ;
typedef TYPE_3__ FCEUGI ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (double*,double*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (scalar_t__,double,double) ;
 int VAR_1 ;
 int FUNC_5 (int,int ,int ,int ,scalar_t__,int) ;
 int FUNC_6 (int,int,double,double,double,double,scalar_t__,int ,int ,int ,TYPE_4__*) ;
 int FUNC_7 () ;
 double VAR_2 ;
 int FUNC_8 (void*,int,int,int,int,int,int,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int ,int) ;
 char* FUNC_10 () ;
 TYPE_2__* FUNC_11 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_12 (int) ;
 int VAR_9 ;
 TYPE_4__* FUNC_13 (double,double,int,int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*,char*) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int) ;
 TYPE_6__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 double VAR_20 ;
 double VAR_21 ;
 double VAR_22 ;
 double VAR_23 ;
 double VAR_24 ;
 double VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 double VAR_29 ;
 double VAR_30 ;
 double VAR_31 ;
 TYPE_5__ VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 TYPE_4__* VAR_35 ;
 scalar_t__ VAR_36 ;
 int VAR_37 ;
 double VAR_38 ;
 double VAR_39 ;
 int VAR_40 ;

int FUNC_18(FCEUGI *VAR_41)
{
 const SDL_VideoInfo *VAR_42;
 int VAR_43=0;

 FUNC_2("Initializing video...");

 FUNC_1(&VAR_38,&VAR_29);

 if(VAR_15) VAR_37=VAR_10.specialfs;
 else VAR_37=VAR_10.special;
 if(!(FUNC_17(VAR_8)&VAR_8))
  if(FUNC_12(VAR_8)==-1)
  {
   FUNC_0(FUNC_10());
   return(0);
  }
 VAR_33|=1;

 FUNC_14(0);
 VAR_39=VAR_29-VAR_38+1;

 VAR_42=FUNC_11();

 if(VAR_42->hw_available)
  VAR_43|=VAR_7;

 if(VAR_15)
  VAR_43|=VAR_4;

 VAR_43|=VAR_6;
  if(VAR_12 && (VAR_43&VAR_7))
   VAR_43|=VAR_3;

 if(VAR_15)
 {
  int VAR_44=VAR_11;

  VAR_30=VAR_22;
  VAR_31=VAR_25;
  VAR_27=VAR_14;
   if(VAR_20<VAR_2*VAR_30 || VAR_30 <= 0.01)
   {
    FUNC_0("xscale out of bounds.");
    FUNC_7();
    return(0);
   }




   if(VAR_23<VAR_39*VAR_31 || VAR_31 <= 0.01)
   {
    FUNC_0("yscale out of bounds.");
    FUNC_7();
    return(0);
   }
  if(!(VAR_35 = FUNC_13(VAR_20, VAR_23, VAR_44, VAR_43)))

  {
   FUNC_0(FUNC_10());
   return(0);
  }
 }
 else
 {
  int VAR_45=0;

  VAR_30=VAR_21;
  VAR_31=VAR_24;
  VAR_27=VAR_13;

  if(VAR_37)
  {
   VAR_30=VAR_31=2;
   if(VAR_37 >= 3) VAR_30=VAR_31=3;
   VAR_27=0;

   if(VAR_37 == 1 || VAR_37 == 3) VAR_45=32;
  }
  VAR_35 = FUNC_13((VAR_2*VAR_30), VAR_39*VAR_31, VAR_45, VAR_43);
 }
 VAR_26=VAR_35->format->BitsPerPixel;
 if(!VAR_35)
 {
  FUNC_0(FUNC_10());
  FUNC_7();
  return(0);
 }


 VAR_33=1;

 FUNC_3(" Video Mode: %d x %d x %d bpp %s\n",VAR_35->w,VAR_35->h,VAR_35->format->BitsPerPixel,VAR_15?"full screen":"");
 if(VAR_26!=16 && VAR_26!=24 && VAR_26!=8 && VAR_26!=32)
 {
  FUNC_3("  Sorry, %dbpp modes are not supported by FCE Ultra.  Supported bit depths are 8bpp, 16bpp, and 32bpp.\n",VAR_26);
  FUNC_7();
  return(0);
 }

 if(VAR_41->name)
  FUNC_15(VAR_41->name,VAR_41->name);
 else
  FUNC_15("FCE Ultra","FCE Ultra");




 VAR_1=FUNC_8((void *)VAR_32.pixel_data,32,32,24,32*3,0xFF0000,0xFF00,0xFF,0x00);


 FUNC_16(VAR_1,0);

 VAR_34=1;

 if(VAR_26>8)



  FUNC_5(VAR_26>>3,VAR_35->format->Rmask,VAR_35->format->Gmask,VAR_35->format->Bmask,VAR_27,VAR_37);
 return 1;
}
