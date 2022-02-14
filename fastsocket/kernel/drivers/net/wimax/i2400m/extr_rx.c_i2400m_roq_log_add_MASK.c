
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2400m_roq_log_entry {int type; unsigned int ws; unsigned int count; unsigned int sn; unsigned int nsn; unsigned int new_ws; } ;
struct i2400m_roq {TYPE_1__* log; } ;
struct i2400m {int dummy; } ;
typedef enum i2400m_ro_type { ____Placeholder_i2400m_ro_type } i2400m_ro_type ;
struct TYPE_2__ {unsigned int in; unsigned int out; struct i2400m_roq_log_entry* entry; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct i2400m*,struct i2400m_roq*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct i2400m*,int,unsigned int,struct i2400m_roq_log_entry*) ;

__attribute__((used)) static
void FUNC_3(struct i2400m *VAR_1,
   struct i2400m_roq *VAR_2, enum i2400m_ro_type VAR_3,
   unsigned VAR_4, unsigned VAR_5, unsigned VAR_6,
   unsigned VAR_7, unsigned VAR_8)
{
 struct i2400m_roq_log_entry *VAR_9;
 unsigned VAR_10;
 int VAR_11 = FUNC_0(VAR_1, VAR_2);


 if (VAR_2->log->in - VAR_2->log->out == VAR_0)
  VAR_2->log->out++;
 VAR_10 = VAR_2->log->in++ % VAR_0;
 VAR_9 = &VAR_2->log->entry[VAR_10];

 VAR_9->type = VAR_3;
 VAR_9->ws = VAR_4;
 VAR_9->count = VAR_5;
 VAR_9->sn = VAR_6;
 VAR_9->nsn = VAR_7;
 VAR_9->new_ws = VAR_8;

 if (FUNC_1(1))
  FUNC_2(VAR_1, VAR_11, VAR_10, VAR_9);
}
