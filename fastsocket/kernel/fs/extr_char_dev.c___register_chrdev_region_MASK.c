
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct char_device_struct {unsigned int major; unsigned int baseminor; int minorct; struct char_device_struct* next; int name; } ;


 int FUNC_0 (struct char_device_struct**) ;
 int VAR_0 ;
 int VAR_1 ;
 struct char_device_struct* FUNC_1 (int) ;
 int VAR_2 ;
 struct char_device_struct** VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct char_device_struct*) ;
 struct char_device_struct* FUNC_3 (int,int ) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char const*,int) ;

__attribute__((used)) static struct char_device_struct *
FUNC_8(unsigned int VAR_5, unsigned int VAR_6,
      int VAR_7, const char *VAR_8)
{
 struct char_device_struct *VAR_9, **VAR_10;
 int VAR_11 = 0;
 int VAR_12;

 VAR_9 = FUNC_3(sizeof(struct char_device_struct), VAR_2);
 if (VAR_9 == ((void*)0))
  return FUNC_1(-VAR_1);

 FUNC_5(&VAR_4);


 if (VAR_5 == 0) {
  for (VAR_12 = FUNC_0(VAR_3)-1; VAR_12 > 0; VAR_12--) {
   if (VAR_3[VAR_12] == ((void*)0))
    break;
  }

  if (VAR_12 == 0) {
   VAR_11 = -VAR_0;
   goto out;
  }
  VAR_5 = VAR_12;
  VAR_11 = VAR_5;
 }

 VAR_9->major = VAR_5;
 VAR_9->baseminor = VAR_6;
 VAR_9->minorct = VAR_7;
 FUNC_7(VAR_9->name, VAR_8, sizeof(VAR_9->name));

 VAR_12 = FUNC_4(VAR_5);

 for (VAR_10 = &VAR_3[VAR_12]; *VAR_10; VAR_10 = &(*VAR_10)->next)
  if ((*VAR_10)->major > VAR_5 ||
      ((*VAR_10)->major == VAR_5 &&
       (((*VAR_10)->baseminor >= VAR_6) ||
        ((*VAR_10)->baseminor + (*VAR_10)->minorct > VAR_6))))
   break;


 if (*VAR_10 && (*VAR_10)->major == VAR_5) {
  int VAR_13 = (*VAR_10)->baseminor;
  int VAR_14 = (*VAR_10)->baseminor + (*VAR_10)->minorct - 1;
  int VAR_15 = VAR_6;
  int VAR_16 = VAR_6 + VAR_7 - 1;


  if (VAR_16 >= VAR_13 && VAR_16 <= VAR_14) {
   VAR_11 = -VAR_0;
   goto out;
  }


  if (VAR_15 <= VAR_14 && VAR_15 >= VAR_13) {
   VAR_11 = -VAR_0;
   goto out;
  }
 }

 VAR_9->next = *VAR_10;
 *VAR_10 = VAR_9;
 FUNC_6(&VAR_4);
 return VAR_9;
out:
 FUNC_6(&VAR_4);
 FUNC_2(VAR_9);
 return FUNC_1(VAR_11);
}
