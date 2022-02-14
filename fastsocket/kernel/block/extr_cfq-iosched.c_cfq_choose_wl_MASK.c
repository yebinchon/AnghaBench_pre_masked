
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfq_queue {unsigned long rb_key; } ;
struct cfq_group {int dummy; } ;
struct cfq_data {int dummy; } ;
typedef enum wl_type_t { ____Placeholder_wl_type_t } wl_type_t ;
typedef enum wl_prio_t { ____Placeholder_wl_prio_t } wl_prio_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct cfq_queue* FUNC_0 (int ) ;
 int FUNC_1 (struct cfq_group*,int,int) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;

__attribute__((used)) static enum wl_type_t FUNC_3(struct cfq_data *VAR_2,
    struct cfq_group *VAR_3, enum wl_prio_t VAR_4)
{
 struct cfq_queue *VAR_5;
 int VAR_6;
 bool VAR_7 = 0;
 unsigned long VAR_8 = 0;
 enum wl_type_t VAR_9 = VAR_0;

 for (VAR_6 = 0; VAR_6 <= VAR_1; ++VAR_6) {

  VAR_5 = FUNC_0(FUNC_1(VAR_3, VAR_4, VAR_6));
  if (VAR_5 &&
      (!VAR_7 || FUNC_2(VAR_5->rb_key, VAR_8))) {
   VAR_8 = VAR_5->rb_key;
   VAR_9 = VAR_6;
   VAR_7 = 1;
  }
 }

 return VAR_9;
}
