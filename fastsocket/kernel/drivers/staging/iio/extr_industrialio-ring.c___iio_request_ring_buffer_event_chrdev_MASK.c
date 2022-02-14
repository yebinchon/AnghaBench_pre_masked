
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct module {int dummy; } ;
struct TYPE_2__ {int id; int _name; } ;
struct iio_ring_buffer {TYPE_1__ ev_int; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int ,struct module*,struct device*) ;
 int FUNC_3 (int ,int,char*,int) ;

__attribute__((used)) static inline int
FUNC_4(struct iio_ring_buffer *VAR_1,
           int VAR_2,
           struct module *VAR_3,
           struct device *VAR_4)
{
 int VAR_5;
 VAR_5 = FUNC_1(&VAR_0);
 if (VAR_5 < 0)
  goto error_ret;
 else
  VAR_1->ev_int.id = VAR_5;

 FUNC_3(VAR_1->ev_int._name, 20,
   "ring_event_line%d",
   VAR_1->ev_int.id);
 VAR_5 = FUNC_2(&(VAR_1->ev_int),
          VAR_1->ev_int._name,
          VAR_3,
          VAR_4);
 if (VAR_5)
  goto error_free_id;
 return 0;

error_free_id:
 FUNC_0(&VAR_0, VAR_1->ev_int.id);
error_ret:
 return VAR_5;
}
