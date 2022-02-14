
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct attrreference {char* attr_dataoffset; scalar_t__ attr_length; } ;
struct _attrlist_buf {char* varcursor; int fixedcursor; char* allocated; int base; } ;
typedef scalar_t__ ssize_t ;
typedef int ar ;


 int FUNC_0 (struct _attrlist_buf*,struct attrreference*,int) ;
 int FUNC_1 (void const*,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,char*) ;
 scalar_t__ FUNC_3 (uintptr_t,int) ;

__attribute__((used)) static void
FUNC_4(struct _attrlist_buf *VAR_0, const void *VAR_1, ssize_t VAR_2,
  const void *VAR_3, ssize_t VAR_4)
{

 struct attrreference VAR_5;
 ssize_t VAR_6;






 VAR_5.attr_dataoffset = VAR_0->varcursor - VAR_0->fixedcursor;
 VAR_5.attr_length = VAR_2 + VAR_4;
 FUNC_0(VAR_0, &VAR_5, sizeof(VAR_5));
 VAR_6 = FUNC_2(VAR_2, VAR_0->allocated - (VAR_0->varcursor - VAR_0->base));
 if (VAR_6 > 0) {
  if (VAR_1 != ((void*)0)) {
   FUNC_1(VAR_1, VAR_0->varcursor, VAR_6);
  }
  VAR_0->varcursor += VAR_6;
 }


 VAR_6 = FUNC_2(VAR_4, VAR_0->allocated - (VAR_0->varcursor - VAR_0->base));
 if (VAR_6 > 0) {

  if (VAR_3 != ((void*)0)) {
   FUNC_1(VAR_3, VAR_0->varcursor, VAR_6);
  }
  VAR_0->varcursor += VAR_6;
 }

 VAR_0->varcursor = (char *)FUNC_3((uintptr_t)VAR_0->varcursor, 4);
}
