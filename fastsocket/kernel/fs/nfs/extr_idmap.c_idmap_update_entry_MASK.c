
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idmap_hashent {char* ih_name; size_t ih_namelen; scalar_t__ ih_expires; int ih_id; } ;
typedef int __u32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t,int ) ;
 int FUNC_2 (char*,char const*,size_t) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_3(struct idmap_hashent *VAR_3, const char *VAR_4,
  size_t VAR_5, __u32 VAR_6)
{
 char *VAR_7 = FUNC_1(VAR_5 + 1, VAR_0);
 if (VAR_7 == ((void*)0))
  return;
 FUNC_0(VAR_3->ih_name);
 VAR_3->ih_id = VAR_6;
 FUNC_2(VAR_7, VAR_4, VAR_5);
 VAR_7[VAR_5] = '\0';
 VAR_3->ih_name = VAR_7;
 VAR_3->ih_namelen = VAR_5;
 VAR_3->ih_expires = VAR_1 + VAR_2;
}
