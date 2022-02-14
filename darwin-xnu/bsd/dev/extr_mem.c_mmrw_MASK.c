
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long vm_address_t ;
struct uio {int uio_rw; int uio_offset; } ;
typedef enum uio_rw { ____Placeholder_uio_rw } uio_rw ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_1 (char const*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 char const* VAR_12 ;
 int FUNC_2 (unsigned long,unsigned int) ;
 unsigned int FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (int ) ;
 unsigned int FUNC_5 (struct uio*) ;
 scalar_t__ FUNC_6 (struct uio*) ;
 int FUNC_7 (struct uio*,unsigned int) ;
 int FUNC_8 (char const*,int,struct uio*) ;

int
FUNC_9(dev_t VAR_13, struct uio *VAR_14, enum uio_rw VAR_15)
{
 unsigned int VAR_16;
 int VAR_17 = 0;

 while (FUNC_6(VAR_14) > 0) {
  FUNC_7(VAR_14, 0);

  switch (FUNC_4(VAR_13)) {


  case 0:
   return (VAR_1);


  case 1:

   return (VAR_1);
  case 2:
   if (VAR_15 == VAR_5)
    return (0);
   VAR_16 = FUNC_5(VAR_14);

   VAR_17 = 0;
   break;
  case 3:
   if(VAR_12 == ((void*)0)) {
    FUNC_0(VAR_12, VAR_9,VAR_4, VAR_2, VAR_3);
    FUNC_1(VAR_12, VAR_4);
   }
   if(VAR_14->uio_rw == VAR_6) {
    VAR_16 = FUNC_5(VAR_14);

    VAR_17 = 0;
    break;
   }

    VAR_16 = FUNC_3(FUNC_5(VAR_14), VAR_4);
   VAR_17 = FUNC_8(VAR_12, (int)VAR_16, VAR_14);
   if (VAR_17)
    break;

   continue;
  default:
   return (VAR_1);
  }

  if (VAR_17)
   break;

  FUNC_7(VAR_14, VAR_16);
 }
 return (VAR_17);




}
