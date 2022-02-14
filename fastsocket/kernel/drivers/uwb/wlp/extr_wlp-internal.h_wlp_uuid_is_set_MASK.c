
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlp_uuid {int data; } ;


 int FUNC_0 (struct wlp_uuid*,struct wlp_uuid*,int) ;

__attribute__((used)) static inline
int FUNC_1(struct wlp_uuid *VAR_0)
{
 struct wlp_uuid VAR_1 = { .data = { 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00} };

 if (!FUNC_0(VAR_0, &VAR_1, sizeof(*VAR_0)))
  return 0;
 return 1;
}
