
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ freelist_records; } ;
typedef TYPE_1__ btlog_t ;
typedef scalar_t__ btlog_recordindex_t ;
struct TYPE_7__ {scalar_t__ next; } ;
typedef TYPE_2__ btlog_record_t ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static btlog_recordindex_t
FUNC_1(btlog_t *VAR_1)
{
 btlog_recordindex_t VAR_2 = VAR_1->freelist_records;

 if (VAR_2 == VAR_0) {

  return VAR_0;
 } else {

  btlog_record_t *VAR_3 = FUNC_0(VAR_1, VAR_2);
  VAR_1->freelist_records = VAR_3->next;
  return VAR_2;
 }
}
