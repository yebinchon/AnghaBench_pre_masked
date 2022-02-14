
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resmap {unsigned long start; unsigned int page_cnt; unsigned long* map; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (size_t) ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_1 (unsigned int) ;
 struct resmap* FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static struct resmap *FUNC_3(unsigned long VAR_2, size_t VAR_3)
{
 unsigned VAR_4;
 struct resmap *VAR_5;

 VAR_4 = FUNC_0(VAR_3) / VAR_1;
 VAR_5 =
     FUNC_2(sizeof(struct resmap) + FUNC_1(VAR_4), VAR_0);
 if (VAR_5 == ((void*)0))
  return ((void*)0);
 VAR_5->start = VAR_2;
 VAR_5->page_cnt = VAR_4;
 VAR_5->map = (unsigned long *)(VAR_5 + 1);
 return VAR_5;
}
