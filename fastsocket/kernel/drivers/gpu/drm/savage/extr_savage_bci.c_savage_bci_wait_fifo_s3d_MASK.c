
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int cob_size; } ;
typedef TYPE_1__ drm_savage_private_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_4(drm_savage_private_t * VAR_5, unsigned int VAR_6)
{
 uint32_t VAR_7 = VAR_5->cob_size + VAR_1 - VAR_6;
 uint32_t VAR_8;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  VAR_8 = FUNC_3(VAR_4);
  if ((VAR_8 & VAR_3) <= VAR_7)
   return 0;
  FUNC_2(1);
 }





 return -VAR_0;
}
