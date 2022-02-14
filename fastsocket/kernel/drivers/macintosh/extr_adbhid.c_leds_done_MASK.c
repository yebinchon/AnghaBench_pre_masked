
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adb_request {int dummy; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,void (*) (struct adb_request*),int ,int,int ,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct adb_request *VAR_8)
{
 int VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;
 unsigned long VAR_12;

 FUNC_2(&VAR_2, VAR_12);

 if (VAR_7 != VAR_6) {
  VAR_10 = VAR_5[VAR_7];
  VAR_9 = VAR_3[VAR_10] & 0xff;
  VAR_3[VAR_10] = 0;
  VAR_7++;
  VAR_7 = (VAR_7 < 16) ? VAR_7 : 0;
  VAR_11 = VAR_4;
 } else
  VAR_4 = 0;
 FUNC_3(&VAR_2, VAR_12);
 if (VAR_11)
  FUNC_1(&VAR_1, FUNC_4, 0, 3,
       FUNC_0(VAR_10, VAR_0), 0xff, ~VAR_9);
}
