
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int size; int count; struct count* counts; } ;
struct count {int x; int y; int count; } ;


 int VAR_0 ;
 int FUNC_0 (struct file*) ;
 struct file* FUNC_1 (char*) ;
 void* FUNC_2 (int,int,int ) ;

__attribute__((used)) static void FUNC_3(int VAR_1, char *VAR_2, int VAR_3, int VAR_4, int VAR_5) {
 struct file *VAR_6 = FUNC_1(VAR_2);

 FUNC_0(VAR_6);
 if (VAR_1 >= VAR_6->size) {
  int VAR_7;
  if (VAR_6->size == 0) {
   VAR_6->size = VAR_1 >= 200 ? 2*VAR_1 : 200;
   VAR_6->counts = FUNC_2(VAR_6->size, sizeof *VAR_6->counts, VAR_0);
  } else {
   struct count *VAR_8;
   VAR_6->size = 2*VAR_1;
   VAR_8 = FUNC_2(VAR_6->size, sizeof *VAR_8, VAR_0);
   for (VAR_7 = 0; VAR_7 < VAR_6->count; VAR_7++)
    VAR_8[VAR_7] = VAR_6->counts[VAR_7];
   VAR_6->counts = VAR_8;
  }
  for (VAR_7 = VAR_6->count; VAR_7 < VAR_6->size; VAR_7++) {
   static struct count VAR_9;
   VAR_6->counts[VAR_7] = VAR_9;
  }
 }
 VAR_6->counts[VAR_1].x = VAR_3;
 VAR_6->counts[VAR_1].y = VAR_4;
 VAR_6->counts[VAR_1].count += VAR_5;
 if (VAR_1 >= VAR_6->count)
  VAR_6->count = VAR_1 + 1;
}
