
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int tablesz ;
struct wq_prepost {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char*,int*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,char*,int,int,int ) ;
 int FUNC_4 (char*,int,int) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_5(void)
{
 uint32_t VAR_6 = 0, VAR_7 = 0;

 if (FUNC_1("wqp_tsize", &VAR_6, sizeof(VAR_6)) != VAR_2)
  VAR_6 = (uint32_t)VAR_3;

 VAR_6 = FUNC_0(VAR_6, VAR_1);
 VAR_7 = VAR_6 / sizeof(struct wq_prepost);
 FUNC_2(VAR_7 > 0 && VAR_6 > 0);


 if (VAR_7 > (VAR_0 + 1))
  VAR_7 = VAR_0 + 1;

 FUNC_4("init prepost table with max:%d elements (%d bytes)",
        VAR_7, VAR_6);
 FUNC_3(&VAR_4, "wqslab.prepost", VAR_7,
             sizeof(struct wq_prepost), VAR_5);
}
