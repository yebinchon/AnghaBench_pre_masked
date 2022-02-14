
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,unsigned long,int) ;
 int FUNC_2 (char*,int,unsigned long) ;

__attribute__((used)) static int FUNC_3(int VAR_1, unsigned long VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0((VAR_1 * VAR_2), VAR_0);

 FUNC_1("result %d from %ld, %d\n", VAR_4, VAR_2, VAR_1);

 if (VAR_4 > VAR_3) {
  FUNC_2("%d ns is too big for current clock rate %ld\n", VAR_1, VAR_2);
  return -1;
 }

 if (VAR_4 < 1)
  VAR_4 = 1;

 return VAR_4;
}
