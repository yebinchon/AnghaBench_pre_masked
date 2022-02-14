
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct scm_request {int request; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct scm_request *VAR_1, struct scm_request *VAR_2)
{
 unsigned long VAR_3, VAR_4, VAR_5, VAR_6;

 VAR_3 = ((u64) FUNC_1(VAR_1->request) << 9) / VAR_0;
 VAR_4 = (((u64) FUNC_1(VAR_1->request) << 9) +
      FUNC_0(VAR_1->request) - 1) / VAR_0;

 VAR_5 = ((u64) FUNC_1(VAR_2->request) << 9) / VAR_0;
 VAR_6 = (((u64) FUNC_1(VAR_2->request) << 9) +
      FUNC_0(VAR_2->request) - 1) / VAR_0;

 return (VAR_5 <= VAR_4 && VAR_3 <= VAR_6);
}
