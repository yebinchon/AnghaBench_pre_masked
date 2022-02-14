
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct i2400m_roq_log {int dummy; } ;
struct i2400m {int rx_reorder; TYPE_1__* rx_roq; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct i2400m_roq_log* log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct device*,char*,size_t) ;
 struct device* FUNC_2 (struct i2400m*) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;
 void* FUNC_4 (size_t,int ) ;

int FUNC_5(struct i2400m *VAR_4)
{
 int VAR_5 = 0;
 struct device *VAR_6 = FUNC_2(VAR_4);

 VAR_4->rx_reorder = VAR_3? 0 : 1;
 if (VAR_4->rx_reorder) {
  unsigned VAR_7;
  size_t VAR_8;
  struct i2400m_roq_log *VAR_9;

  VAR_5 = -VAR_0;

  VAR_8 = sizeof(VAR_4->rx_roq[0]) * (VAR_2 + 1);
  VAR_4->rx_roq = FUNC_4(VAR_8, VAR_1);
  if (VAR_4->rx_roq == ((void*)0)) {
   FUNC_1(VAR_6, "RX: cannot allocate %zu bytes for "
    "reorder queues\n", VAR_8);
   goto error_roq_alloc;
  }

  VAR_8 = sizeof(*VAR_4->rx_roq[0].log) * (VAR_2 + 1);
  VAR_9 = FUNC_4(VAR_8, VAR_1);
  if (VAR_9 == ((void*)0)) {
   FUNC_1(VAR_6, "RX: cannot allocate %zu bytes for "
    "reorder queues log areas\n", VAR_8);
   VAR_5 = -VAR_0;
   goto error_roq_log_alloc;
  }

  for(VAR_7 = 0; VAR_7 < VAR_2 + 1; VAR_7++) {
   FUNC_0(&VAR_4->rx_roq[VAR_7]);
   VAR_4->rx_roq[VAR_7].log = &VAR_9[VAR_7];
  }
 }
 return 0;

error_roq_log_alloc:
 FUNC_3(VAR_4->rx_roq);
error_roq_alloc:
 return VAR_5;
}
