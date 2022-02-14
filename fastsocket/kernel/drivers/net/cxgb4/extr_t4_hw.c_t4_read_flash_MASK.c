
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {unsigned int sf_size; } ;
struct adapter {TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct adapter*,int,int,int,int *) ;
 int FUNC_2 (struct adapter*,int,int,int ,unsigned int) ;
 unsigned int FUNC_3 (unsigned int) ;
 int FUNC_4 (struct adapter*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct adapter *VAR_3, unsigned int VAR_4,
    unsigned int VAR_5, u32 *VAR_6, int VAR_7)
{
 int VAR_8;

 if (VAR_4 + VAR_5 * sizeof(u32) > VAR_3->params.sf_size || (VAR_4 & 3))
  return -VAR_0;

 VAR_4 = FUNC_3(VAR_4) | VAR_2;

 if ((VAR_8 = FUNC_2(VAR_3, 4, 1, 0, VAR_4)) != 0 ||
     (VAR_8 = FUNC_1(VAR_3, 1, 1, 0, VAR_6)) != 0)
  return VAR_8;

 for ( ; VAR_5; VAR_5--, VAR_6++) {
  VAR_8 = FUNC_1(VAR_3, 4, VAR_5 > 1, VAR_5 == 1, VAR_6);
  if (VAR_5 == 1)
   FUNC_4(VAR_3, VAR_1, 0);
  if (VAR_8)
   return VAR_8;
  if (VAR_7)
   *VAR_6 = FUNC_0(*VAR_6);
 }
 return 0;
}
