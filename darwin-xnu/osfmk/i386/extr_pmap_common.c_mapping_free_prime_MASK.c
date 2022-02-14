
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
typedef void* queue_entry_t ;
typedef TYPE_2__* pv_hashed_entry_t ;
struct TYPE_8__ {void* next; } ;
struct TYPE_9__ {TYPE_1__ qlink; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,int) ;
 unsigned int VAR_2 ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_4 (int ) ;

void
FUNC_5(void)
{
 unsigned VAR_11;
 pv_hashed_entry_t VAR_12;
 pv_hashed_entry_t VAR_13;
 pv_hashed_entry_t VAR_14;
 int VAR_15;


 VAR_9 = FUNC_0(VAR_4, ((uint32_t)(VAR_10 >> 30)) * 2000);
 VAR_9 = FUNC_1(VAR_9, 16000);

 VAR_7 = FUNC_0(VAR_3, ((uint32_t)(VAR_10 >> 30)) * 1000);
 VAR_7 = FUNC_1(VAR_7, 16000);
 VAR_6 = VAR_2;
 VAR_5 = VAR_0;

 VAR_15 = 0;
 VAR_13 = VAR_14 = VAR_1;

 for (VAR_11 = 0; VAR_11 < (5 * VAR_0); VAR_11++) {
  VAR_12 = (pv_hashed_entry_t) FUNC_4(VAR_8);

  VAR_12->qlink.next = (queue_entry_t)VAR_13;
  VAR_13 = VAR_12;

  if (VAR_14 == VAR_1)
          VAR_14 = VAR_12;
  VAR_15++;
 }
 FUNC_2(VAR_13, VAR_14, VAR_15);

 VAR_15 = 0;
 VAR_13 = VAR_14 = VAR_1;
 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  VAR_12 = (pv_hashed_entry_t) FUNC_4(VAR_8);

  VAR_12->qlink.next = (queue_entry_t)VAR_13;
  VAR_13 = VAR_12;

  if (VAR_14 == VAR_1)
          VAR_14 = VAR_12;
  VAR_15++;
 }
 FUNC_3(VAR_13, VAR_14, VAR_15);
}
