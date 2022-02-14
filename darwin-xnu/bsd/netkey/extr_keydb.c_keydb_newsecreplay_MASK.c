
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct secreplay {size_t wsize; void* bitmap; } ;
typedef void* caddr_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct secreplay*,int ) ;
 scalar_t__ FUNC_2 (size_t,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_5 ;

struct secreplay *
FUNC_5(size_t VAR_6)
{
 struct secreplay *VAR_7;

 FUNC_0(VAR_5, VAR_0);

 VAR_7 = (struct secreplay *)FUNC_2(sizeof(*VAR_7), VAR_2, VAR_1 | VAR_4);
 if (!VAR_7) {
  FUNC_4(VAR_5);
  VAR_7 = (struct secreplay *)FUNC_2(sizeof(*VAR_7), VAR_2,
      VAR_3 | VAR_4);
  FUNC_3(VAR_5);
 }
 if (!VAR_7)
  return VAR_7;

 if (VAR_6 != 0) {
  VAR_7->bitmap = (caddr_t)FUNC_2(VAR_6, VAR_2, VAR_1 | VAR_4);
  if (!VAR_7->bitmap) {
   FUNC_4(VAR_5);
   VAR_7->bitmap = (caddr_t)FUNC_2(VAR_6, VAR_2,
       VAR_3 | VAR_4);
   FUNC_3(VAR_5);
   if (!VAR_7->bitmap) {
    FUNC_1(VAR_7, VAR_2);
    return ((void*)0);
   }
  }
 }
 VAR_7->wsize = VAR_6;
 return VAR_7;
}
