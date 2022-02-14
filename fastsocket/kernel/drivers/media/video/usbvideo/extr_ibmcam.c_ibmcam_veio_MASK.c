
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct uvd {int last_error; TYPE_1__* dev; } ;
typedef int cp ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (struct uvd*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned short,unsigned short) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (TYPE_1__*,int ,unsigned char,int,unsigned short,unsigned short,unsigned char*,int,int) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_6(
 struct uvd *VAR_4,
 unsigned char VAR_5,
 unsigned short VAR_6,
 unsigned short VAR_7)
{
 static const char VAR_8[] = "ibmcam_veio";
 unsigned char VAR_9[8] ;
 int VAR_10;

 if (!FUNC_0(VAR_4))
  return 0;

 if (VAR_5 == 1) {
  VAR_10 = FUNC_3(
   VAR_4->dev,
   FUNC_4(VAR_4->dev, 0),
   VAR_5,
   VAR_0 | VAR_3 | VAR_2,
   VAR_6,
   VAR_7,
   VAR_9,
   sizeof(VAR_9),
   1000);







 } else {
  VAR_10 = FUNC_3(
   VAR_4->dev,
   FUNC_5(VAR_4->dev, 0),
   VAR_5,
   VAR_1 | VAR_3 | VAR_2,
   VAR_6,
   VAR_7,
   ((void*)0),
   0,
   1000);
 }
 if (VAR_10 < 0) {
  FUNC_2("%s: ERROR=%d. Camera stopped; Reconnect or reload driver.",
      VAR_8, VAR_10);
  VAR_4->last_error = VAR_10;
 }
 return VAR_10;
}
