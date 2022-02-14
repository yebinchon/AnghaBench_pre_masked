
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef size_t png_uint_32 ;
typedef TYPE_2__* png_structrp ;
typedef int * png_const_charp ;
typedef int png_const_bytep ;
typedef int png_byte ;
struct TYPE_18__ {scalar_t__ output_len; } ;
typedef TYPE_3__ compression_state ;
struct TYPE_16__ {char* msg; } ;
struct TYPE_17__ {TYPE_1__ zstream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t FUNC_0 (TYPE_2__*,int *,int *) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ,TYPE_3__*,size_t) ;
 int FUNC_4 (TYPE_3__*,int ,int ) ;
 int FUNC_5 (TYPE_2__*,int *,size_t) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_8 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_9 (TYPE_2__*,int *,int *,int ) ;
 int VAR_4 ;
 int FUNC_10 (int *) ;

void
FUNC_11(png_structrp VAR_5, png_const_charp VAR_6, png_const_charp VAR_7,
    int VAR_8)
{
   png_uint_32 VAR_9;
   png_byte VAR_10[81];
   compression_state VAR_11;

   FUNC_1(1, "in png_write_zTXt");

   if (VAR_8 == VAR_1)
   {
      FUNC_9(VAR_5, VAR_6, VAR_7, 0);
      return;
   }

   if (VAR_8 != VAR_2)
      FUNC_2(VAR_5, "zTXt: invalid compression type");

   VAR_9 = FUNC_0(VAR_5, VAR_6, VAR_10);

   if (VAR_9 == 0)
      FUNC_2(VAR_5, "zTXt: invalid keyword");


   VAR_10[++VAR_9] = VAR_0;
   ++VAR_9;


   FUNC_4(&VAR_11, (png_const_bytep)VAR_7,
       VAR_7 == ((void*)0) ? 0 : FUNC_10(VAR_7));

   if (FUNC_3(VAR_5, VAR_4, &VAR_11, VAR_9) != VAR_3)
      FUNC_2(VAR_5, VAR_5->zstream.msg);


   FUNC_7(VAR_5, VAR_4, VAR_9 + VAR_11.output_len);


   FUNC_5(VAR_5, VAR_10, VAR_9);


   FUNC_8(VAR_5, &VAR_11);


   FUNC_6(VAR_5);
}
