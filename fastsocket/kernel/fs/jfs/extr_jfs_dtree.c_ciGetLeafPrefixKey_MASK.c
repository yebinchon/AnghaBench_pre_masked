
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;
struct component_name {size_t namlen; scalar_t__* name; } ;
typedef int dtpage_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct component_name*) ;
 int FUNC_1 (int *,int,struct component_name*,int) ;
 int FUNC_2 (scalar_t__*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (size_t,size_t) ;

__attribute__((used)) static int FUNC_5(dtpage_t * VAR_4, int VAR_5, dtpage_t * VAR_6,
          int VAR_7, struct component_name * VAR_8, int VAR_9)
{
 int VAR_10, VAR_11;
 wchar_t *VAR_12, *VAR_13, *VAR_14;
 struct component_name VAR_15;
 struct component_name VAR_16;

 VAR_15.name = FUNC_3((VAR_2 + 1) * sizeof(wchar_t),
     VAR_1);
 if (VAR_15.name == ((void*)0))
  return -VAR_0;

 VAR_16.name = FUNC_3((VAR_2 + 1) * sizeof(wchar_t),
     VAR_1);
 if (VAR_16.name == ((void*)0)) {
  FUNC_2(VAR_15.name);
  return -VAR_0;
 }


 FUNC_1(VAR_4, VAR_5, &VAR_15, VAR_9);
 VAR_15.name[VAR_15.namlen] = 0;

 if ((VAR_9 & VAR_3) == VAR_3)
  FUNC_0(&VAR_15);

 FUNC_1(VAR_6, VAR_7, &VAR_16, VAR_9);
 VAR_16.name[VAR_16.namlen] = 0;


 if ((VAR_9 & VAR_3) == VAR_3)
  FUNC_0(&VAR_16);


 VAR_10 = 0;
 VAR_14 = VAR_8->name;
 VAR_11 = FUNC_4(VAR_15.namlen, VAR_16.namlen);
 for (VAR_12 = VAR_15.name, VAR_13 = VAR_16.name;
      VAR_11; VAR_12++, VAR_13++, VAR_11--, VAR_10++, VAR_14++) {
  *VAR_14 = *VAR_13;
  if (*VAR_12 != *VAR_13) {
   VAR_8->namlen = VAR_10 + 1;
   goto free_names;
  }
 }


 if (VAR_15.namlen < VAR_16.namlen) {
  *VAR_14 = *VAR_13;
  VAR_8->namlen = VAR_10 + 1;
 } else
  VAR_8->namlen = VAR_10;

free_names:
 FUNC_2(VAR_15.name);
 FUNC_2(VAR_16.name);
 return 0;
}
