
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int type ;
typedef int net_length ;
typedef int mbuf_t ;


 int FUNC_0 (int ,int *,char*,int ) ;
 int FUNC_1 (int ,int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int,void const*,int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_5(mbuf_t VAR_3, uint8_t VAR_4, uint32_t VAR_5, const void *VAR_6)
{
 uint32_t VAR_7 = FUNC_2(VAR_5);
 int VAR_8 = 0;

 VAR_8 = FUNC_3(VAR_3, FUNC_4(VAR_3), sizeof(VAR_4), &VAR_4, VAR_1);
 if (VAR_8) {
  FUNC_0(VAR_0, &VAR_2, "failed to append the type (%d)", VAR_4);
  return VAR_8;
 }

 VAR_8 = FUNC_3(VAR_3, FUNC_4(VAR_3), sizeof(VAR_7), &VAR_7, VAR_1);
 if (VAR_8) {
  FUNC_0(VAR_0, &VAR_2, "failed to append the length (%u)", VAR_5);
  return VAR_8;
 }

 VAR_8 = FUNC_3(VAR_3, FUNC_4(VAR_3), VAR_5, VAR_6, VAR_1);
 if (VAR_8) {
  FUNC_1(VAR_0, &VAR_2, "failed to append the value");
  return VAR_8;
 }

 return VAR_8;
}
