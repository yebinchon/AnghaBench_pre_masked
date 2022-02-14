
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct display {int written_file; int * write_pp; int original_file; int * read_ip; int * read_pp; int * original_rows; int * original_ip; int * original_pp; int * operation; int * filename; int options; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct display*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct display *VAR_1)




{
   FUNC_1(VAR_1, 0, sizeof *VAR_1);
   VAR_1->options = VAR_0;
   VAR_1->filename = ((void*)0);
   VAR_1->operation = ((void*)0);
   VAR_1->original_pp = ((void*)0);
   VAR_1->original_ip = ((void*)0);
   VAR_1->original_rows = ((void*)0);
   VAR_1->read_pp = ((void*)0);
   VAR_1->read_ip = ((void*)0);
   FUNC_0(&VAR_1->original_file);





}
