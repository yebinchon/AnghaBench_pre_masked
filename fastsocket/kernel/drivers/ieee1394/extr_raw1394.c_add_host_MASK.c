
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsb_host {int dummy; } ;
struct host_info {int list; int file_info_list; struct hpsb_host* host; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct host_info* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct hpsb_host *VAR_5)
{
 struct host_info *VAR_6;
 unsigned long VAR_7;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_0);

 if (VAR_6) {
  FUNC_0(&VAR_6->list);
  VAR_6->host = VAR_5;
  FUNC_0(&VAR_6->file_info_list);

  FUNC_4(&VAR_3, VAR_7);
  FUNC_3(&VAR_6->list, &VAR_2);
  VAR_1++;
  FUNC_5(&VAR_3, VAR_7);
 }

 FUNC_1(&VAR_4);
}
