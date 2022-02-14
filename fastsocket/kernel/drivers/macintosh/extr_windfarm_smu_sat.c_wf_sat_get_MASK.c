
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wf_sensor {int dummy; } ;
struct wf_sat_sensor {int index; int shift; int index2; struct wf_sat* sat; } ;
struct wf_sat {int* cache; int mutex; scalar_t__ last_read; int * i2c; } ;
typedef int s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct wf_sat*) ;
 struct wf_sat_sensor* FUNC_4 (struct wf_sensor*) ;

__attribute__((used)) static int FUNC_5(struct wf_sensor *VAR_3, s32 *VAR_4)
{
 struct wf_sat_sensor *VAR_5 = FUNC_4(VAR_3);
 struct wf_sat *VAR_6 = VAR_5->sat;
 int VAR_7, VAR_8;
 s32 VAR_9;

 if (VAR_6->i2c == ((void*)0))
  return -VAR_0;

 FUNC_0(&VAR_6->mutex);
 if (FUNC_2(VAR_2, (VAR_6->last_read + VAR_1))) {
  VAR_8 = FUNC_3(VAR_6);
  if (VAR_8)
   goto fail;
 }

 VAR_7 = VAR_5->index * 2;
 VAR_9 = ((VAR_6->cache[VAR_7] << 8) + VAR_6->cache[VAR_7+1]) << VAR_5->shift;
 if (VAR_5->index2 >= 0) {
  VAR_7 = VAR_5->index2 * 2;

  VAR_9 = (VAR_9 * ((VAR_6->cache[VAR_7] << 8) + VAR_6->cache[VAR_7+1])) >> 4;
 }

 *VAR_4 = VAR_9;
 VAR_8 = 0;

 fail:
 FUNC_1(&VAR_6->mutex);
 return VAR_8;
}
