
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
typedef int vm_offset_t ;
typedef int upl_t ;
struct clios {int dummy; } ;
typedef int off_t ;
typedef int buf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int,int,int ,struct clios*,int (*) (int ,void*),void*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(vnode_t VAR_3, upl_t VAR_4, vm_offset_t VAR_5, off_t VAR_6, int VAR_7,
    int VAR_8, buf_t VAR_9, struct clios *VAR_10, int (*VAR_11)(buf_t, void *), void *VAR_12)
{
 FUNC_1(VAR_4);

 if(VAR_8 & VAR_1) {
  if(VAR_5 == 0 && ((VAR_7 & VAR_2)==0))
          VAR_8 &= ~VAR_0;
  else
          VAR_8 |= VAR_0;
 }
 return (FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12));

}
