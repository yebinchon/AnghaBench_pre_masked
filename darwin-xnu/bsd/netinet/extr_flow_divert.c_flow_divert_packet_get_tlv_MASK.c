
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint32_t ;
typedef int type ;
typedef int mbuf_t ;
typedef int length ;


 int FUNC_0 (int ,int,int ,int*,int ) ;
 int FUNC_1 (int ,int,size_t,void*) ;
 size_t FUNC_2 (size_t) ;

__attribute__((used)) static int
FUNC_3(mbuf_t VAR_0, int VAR_1, uint8_t VAR_2, size_t VAR_3, void *VAR_4, uint32_t *VAR_5)
{
 int VAR_6 = 0;
 uint32_t VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_6, 0);
 if (VAR_8 < 0) {
  return VAR_6;
 }

 VAR_6 = FUNC_1(VAR_0, VAR_8 + sizeof(VAR_2), sizeof(VAR_7), &VAR_7);
 if (VAR_6) {
  return VAR_6;
 }

 VAR_7 = FUNC_2(VAR_7);

 if (VAR_5 != ((void*)0)) {
  *VAR_5 = VAR_7;
 }

 if (VAR_4 != ((void*)0) && VAR_3 > 0) {
  size_t VAR_9 = (VAR_7 < VAR_3) ? VAR_7 : VAR_3;
  VAR_6 = FUNC_1(VAR_0, VAR_8 + sizeof(VAR_2) + sizeof(VAR_7), VAR_9, VAR_4);
  if (VAR_6) {
   return VAR_6;
  }
 }

 return 0;
}
