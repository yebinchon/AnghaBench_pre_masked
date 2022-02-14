
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct wl1271 {scalar_t__* session_ids; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct wl1271 *VAR_1, u8 VAR_2)
{
 if (VAR_1->session_ids[VAR_2] >= VAR_0)
  VAR_1->session_ids[VAR_2] = 0;

 VAR_1->session_ids[VAR_2]++;

 return VAR_1->session_ids[VAR_2];
}
