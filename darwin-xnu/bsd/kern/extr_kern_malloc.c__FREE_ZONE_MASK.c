
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmzones {scalar_t__ kz_zalloczone; size_t kz_elemsize; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,size_t) ;
 struct kmzones* VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__,void*) ;

void
FUNC_3(
 void *VAR_3,
 size_t VAR_4,
 int VAR_5)
{
 struct kmzones *VAR_6;

 if (VAR_5 >= VAR_1)
  FUNC_1("FREE_SIZE");

 VAR_6 = &VAR_2[VAR_5];
 if (VAR_6->kz_zalloczone == VAR_0)
  FUNC_1("free_zone ZONE");


 if (VAR_6->kz_elemsize == (size_t)(-1))
  FUNC_1("FREE_SIZE XXX");

 if (VAR_4 == VAR_6->kz_elemsize)
  FUNC_2(VAR_6->kz_zalloczone, VAR_3);
 else
  FUNC_0(VAR_3, VAR_4);
}
