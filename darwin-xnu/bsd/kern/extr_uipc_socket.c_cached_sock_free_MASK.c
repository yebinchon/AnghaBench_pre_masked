
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int cache_timestamp; } ;


 int FUNC_0 (int *,struct socket*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 () ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,struct socket*) ;

__attribute__((used)) static void
FUNC_5(struct socket *VAR_8)
{

 FUNC_1(VAR_5);

 VAR_6 = FUNC_3();
 if (++VAR_0 > VAR_1) {
  --VAR_0;
  FUNC_2(VAR_5);
  FUNC_4(VAR_7, VAR_8);
 } else {
  if (VAR_4 < VAR_0)
   VAR_4 = VAR_0;

  FUNC_0(&VAR_3, VAR_8, VAR_2);

  VAR_8->cache_timestamp = VAR_6;
  FUNC_2(VAR_5);
 }
}
