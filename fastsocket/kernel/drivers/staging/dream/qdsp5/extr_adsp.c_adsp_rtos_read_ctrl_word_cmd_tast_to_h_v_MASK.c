
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct msm_adsp_module {unsigned int name; int driver_data; TYPE_1__* ops; int num_events; } ;
struct adsp_info {unsigned int max_task_id; } ;
struct TYPE_2__ {int (* event ) (int ,unsigned int,unsigned int,void (*) (void*,size_t)) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct adsp_info*,unsigned int) ;
 struct msm_adsp_module* FUNC_1 (struct adsp_info*,int ) ;
 int FUNC_2 (char*,unsigned int) ;
 void FUNC_3 (void*,size_t) ;
 void FUNC_4 (void*,size_t) ;
 int* VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ,unsigned int,unsigned int,void (*) (void*,size_t)) ;

__attribute__((used)) static int FUNC_6(
 struct adsp_info *VAR_6, void *VAR_7)
{
 struct msm_adsp_module *VAR_8;
 unsigned VAR_9;
 unsigned VAR_10;
 unsigned VAR_11;
 void (*VAR_12)(void *, size_t);

 if (VAR_7 >= (void *)(VAR_2 + VAR_3)) {
  uint32_t *VAR_13 = VAR_7;
  uint32_t VAR_14 = *VAR_13++;
  VAR_9 = (VAR_14 & VAR_1) >> 8;
  VAR_10 = (VAR_14 & VAR_0);
  VAR_5 = VAR_14 >> 16;
  VAR_4 = VAR_13;
  VAR_11 = VAR_5 * sizeof(uint32_t);
  VAR_12 = FUNC_4;
 } else {
  uint16_t *VAR_15 = VAR_7;
  uint16_t VAR_16 = *VAR_15++;
  VAR_9 = (VAR_16 & VAR_1) >> 8;
  VAR_10 = VAR_16 & VAR_0;
  VAR_5 = *VAR_15++;
  VAR_4 = VAR_15;
  VAR_11 = VAR_5 * sizeof(uint16_t);
  VAR_12 = FUNC_3;
 }

 if (VAR_9 > VAR_6->max_task_id) {
  FUNC_2("adsp: bogus task id %d\n", VAR_9);
  return 0;
 }
 VAR_8 = FUNC_1(VAR_6,
     FUNC_0(VAR_6, VAR_9));

 if (!VAR_8) {
  FUNC_2("adsp: no module for task id %d\n", VAR_9);
  return 0;
 }

 VAR_8->num_events++;

 if (!VAR_8->ops) {
  FUNC_2("adsp: module %s is not open\n", VAR_8->name);
  return 0;
 }

 VAR_8->ops->event(VAR_8->driver_data, VAR_10, VAR_11, VAR_12);
 return 0;
}
