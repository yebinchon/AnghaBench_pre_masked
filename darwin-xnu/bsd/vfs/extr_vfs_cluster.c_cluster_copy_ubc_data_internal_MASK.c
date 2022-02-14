
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
struct uio {int uio_offset; int uio_segflg; } ;
typedef scalar_t__ memory_object_control_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int,int,int,int,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;







 int FUNC_2 (scalar_t__,int,struct uio*,int,int,int,int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct uio*) ;

__attribute__((used)) static int
FUNC_5(vnode_t VAR_10, struct uio *VAR_11, int *VAR_12, int VAR_13, int VAR_14)
{
 int VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19 = 0;
 memory_object_control_t VAR_20;

 VAR_16 = *VAR_12;

 FUNC_1((FUNC_0(VAR_0, 34)) | VAR_2,
       (int)VAR_11->uio_offset, VAR_16, VAR_13, VAR_14, 0);

 VAR_20 = FUNC_3(VAR_10, VAR_5);

 if (VAR_20 == VAR_3) {
  FUNC_1((FUNC_0(VAR_0, 34)) | VAR_1,
        (int)VAR_11->uio_offset, VAR_16, VAR_19, 3, 0);

  return(0);
 }
 VAR_15 = VAR_11->uio_segflg;

 switch(VAR_15) {

   case 129:
   case 132:
  VAR_11->uio_segflg = VAR_8;
  break;

   case 128:
   case 131:
  VAR_11->uio_segflg = VAR_9;
  break;

   case 130:
   case 133:
  VAR_11->uio_segflg = VAR_7;
  break;

   case 134:
  VAR_11->uio_segflg = VAR_6;
  break;
 }

 if ( (VAR_16 = *VAR_12) ) {
         VAR_18 = (int)(VAR_11->uio_offset & VAR_4);
  VAR_17 = FUNC_4(VAR_11);

  VAR_19 = FUNC_2(VAR_20, VAR_11->uio_offset - VAR_18, VAR_11,
             VAR_18, VAR_16, VAR_13, VAR_14);
  VAR_17 -= FUNC_4(VAR_11);
  VAR_16 -= VAR_17;
 }
 VAR_11->uio_segflg = VAR_15;
 *VAR_12 = VAR_16;

 FUNC_1((FUNC_0(VAR_0, 34)) | VAR_1,
       (int)VAR_11->uio_offset, VAR_16, VAR_19, 0x80000000 | VAR_15, 0);

 return(VAR_19);
}
