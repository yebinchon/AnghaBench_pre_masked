
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsb_highlevel {int host_info_list; int host_info_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct hpsb_highlevel *VAR_0)
{
 FUNC_1(&VAR_0->host_info_lock);
 FUNC_0(&VAR_0->host_info_list);
}
