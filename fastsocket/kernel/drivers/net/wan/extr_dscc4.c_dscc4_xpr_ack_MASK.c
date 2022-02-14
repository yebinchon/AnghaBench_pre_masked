
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dscc4_dev_priv {int iqtx_current; int flags; int* iqtx; } ;
typedef scalar_t__ s8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;

__attribute__((used)) static inline int FUNC_3(struct dscc4_dev_priv *VAR_5)
{
 int VAR_6 = VAR_5->iqtx_current%VAR_1;
 s8 VAR_7 = 0;

 do {
  if (!(VAR_5->flags & (VAR_2 | VAR_3)) ||
      (VAR_5->iqtx[VAR_6] & FUNC_0(VAR_4)))
   break;
  FUNC_2();
  FUNC_1(10);
 } while (++VAR_7 > 0);

 return (VAR_7 >= 0 ) ? VAR_7 : -VAR_0;
}
