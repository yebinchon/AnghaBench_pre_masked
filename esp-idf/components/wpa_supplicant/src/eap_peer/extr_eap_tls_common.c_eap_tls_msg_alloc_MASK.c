
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
typedef scalar_t__ EapType ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct wpabuf* FUNC_0 (int ,scalar_t__,size_t,int ,int ) ;

__attribute__((used)) static struct wpabuf * FUNC_1(EapType VAR_4, size_t VAR_5,
      u8 VAR_6, u8 VAR_7)
{
 if (VAR_4 == VAR_0)
  return FUNC_0(VAR_3,
         VAR_2, VAR_5,
         VAR_6, VAR_7);
 return FUNC_0(VAR_1, VAR_4, VAR_5, VAR_6,
        VAR_7);
}
