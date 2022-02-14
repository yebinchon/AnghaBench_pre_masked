
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int pressure; unsigned int x; unsigned int y; } ;
struct corgi_ts {TYPE_1__ tc; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned long FUNC_0 (struct corgi_ts*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 () ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 unsigned int FUNC_7 (struct corgi_ts*,int,int,unsigned int,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct corgi_ts *VAR_2)
{
 unsigned int VAR_3, VAR_4, VAR_5, VAR_6;
 unsigned long VAR_7, VAR_8;


 FUNC_6(VAR_7);
 FUNC_2();
 VAR_8 = FUNC_0(VAR_2);


 FUNC_7(VAR_2, 0, 1, 1u, VAR_8);


 FUNC_7(VAR_2, 1, 1, 1u, VAR_8);


 VAR_4 = FUNC_7(VAR_2, 1, 1, 5u, VAR_8);


 VAR_3 = FUNC_7(VAR_2, 1, 1, 3u, VAR_8);


 VAR_5 = FUNC_7(VAR_2, 1, 1, 4u, VAR_8);
 VAR_6 = FUNC_7(VAR_2, 1, 0, 4u, VAR_8);


 FUNC_3((1u << VAR_0) | VAR_1);
 FUNC_1();

 FUNC_4();
 FUNC_5(VAR_7);

 if (VAR_3== 0 || VAR_4 == 0 || VAR_5 == 0 || (VAR_3 * (VAR_6 - VAR_5) / VAR_5) >= 15000) {
  VAR_2->tc.pressure = 0;
  return 0;
 }

 VAR_2->tc.x = VAR_3;
 VAR_2->tc.y = VAR_4;
 VAR_2->tc.pressure = (VAR_3 * (VAR_6 - VAR_5)) / VAR_5;
 return 1;
}
