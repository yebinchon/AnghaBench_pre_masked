
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int time_used; char* id; int total_count; double success_count; } ;
typedef TYPE_1__ EntryStat ;


 int FUNC_0 (char*,char*,int,double,int,int,double,double) ;

__attribute__((used)) static void FUNC_1(EntryStat *VAR_0, const int VAR_1)
{
 EntryStat *VAR_2;
 EntryStat *VAR_3;
 int VAR_4;

 VAR_3 = VAR_0 + VAR_1;
 for (VAR_2=VAR_0; VAR_2<VAR_3; VAR_2++)
 {
  VAR_4 = VAR_2->time_used / 1000;
  FUNC_0("%s %d %d %d %d %.2f %.2f\n", VAR_2->id, VAR_2->total_count,
   VAR_2->success_count, (int)(VAR_2->time_used / 1000),
   VAR_2->total_count == 0 ? 0 : (int)(VAR_2->time_used / VAR_2->total_count),
   VAR_4 == 0 ? 0 : (double)VAR_2->success_count / VAR_4,
   VAR_2->total_count > 0 ? 100.00 * VAR_2->success_count / VAR_2->total_count : 0.00);
 }
}
