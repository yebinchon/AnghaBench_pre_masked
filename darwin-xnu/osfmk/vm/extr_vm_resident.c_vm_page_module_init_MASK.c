
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_size_t ;
typedef int uint64_t ;
struct vm_page_with_ppnum {int dummy; } ;
struct vm_page {int dummy; } ;
struct TYPE_5__ {int count; int sum_count; int elem_size; int cur_size; int page_count; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int) ;
 TYPE_1__* VAR_10 ;
 int VAR_11 ;
 TYPE_1__* VAR_12 ;
 TYPE_1__* FUNC_3 (int,int ,int,char*) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;

void
FUNC_5(void)
{
 uint64_t VAR_13, VAR_14;
 vm_size_t VAR_15;

 VAR_10 = FUNC_3((vm_size_t) sizeof(struct vm_page),
        0, VAR_1, "vm pages array");

 FUNC_4(VAR_10, VAR_5, VAR_0);
 FUNC_4(VAR_10, VAR_7, VAR_0);
 FUNC_4(VAR_10, VAR_6, VAR_2);
 FUNC_4(VAR_10, VAR_8, VAR_2);
 FUNC_4(VAR_10, VAR_9, VAR_2);




 VAR_10->count += VAR_11;
 VAR_10->sum_count += VAR_11;
 VAR_14 = VAR_11 * VAR_10->elem_size;
 VAR_10->cur_size += VAR_14;
 VAR_13 = ((FUNC_2(VAR_14)) / VAR_1);
 FUNC_0(VAR_13, &(VAR_10->page_count));

 FUNC_1(VAR_13);

 VAR_15 = (sizeof(struct vm_page_with_ppnum) + (VAR_3-1)) & ~(VAR_3 - 1);

 VAR_12 = FUNC_3(VAR_15,
        0, VAR_1, "vm pages");

 FUNC_4(VAR_12, VAR_5, VAR_0);
 FUNC_4(VAR_12, VAR_7, VAR_0);
 FUNC_4(VAR_12, VAR_6, VAR_2);
 FUNC_4(VAR_12, VAR_8, VAR_2);
 FUNC_4(VAR_12, VAR_9, VAR_2);
 FUNC_4(VAR_12, VAR_4, VAR_2);
}
