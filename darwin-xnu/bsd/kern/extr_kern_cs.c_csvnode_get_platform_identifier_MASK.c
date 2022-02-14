
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct vnode {int dummy; } ;
struct cs_blob {TYPE_1__* csb_cd; } ;
typedef int off_t ;
struct TYPE_2__ {int platform; int length; } ;
typedef TYPE_1__ CS_CodeDirectory ;


 int FUNC_0 (int ) ;
 struct cs_blob* FUNC_1 (struct vnode*,int,int ) ;

uint8_t
FUNC_2(struct vnode *VAR_0, off_t VAR_1)
{
 struct cs_blob *VAR_2;
 const CS_CodeDirectory *VAR_3;

 VAR_2 = FUNC_1(VAR_0, -1, VAR_1);
 if (VAR_2 == ((void*)0))
  return 0;

 VAR_3 = VAR_2->csb_cd;
 if (VAR_3 == ((void*)0) || FUNC_0(VAR_3->length) < 8)
  return 0;

 return VAR_3->platform;
}
