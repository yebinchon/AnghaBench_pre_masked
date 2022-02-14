
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int* data; int len; } ;
struct b43legacy_pioqueue {scalar_t__ need_workarounds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct b43legacy_pioqueue*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct b43legacy_pioqueue *VAR_4,
   struct sk_buff *VAR_5)
{
 if (VAR_4->need_workarounds) {
  FUNC_0(VAR_4, VAR_3,
        VAR_5->data[VAR_5->len - 1]);
  FUNC_0(VAR_4, VAR_0,
        VAR_2 |
        VAR_1);
 } else
  FUNC_0(VAR_4, VAR_0,
        VAR_1);
}
