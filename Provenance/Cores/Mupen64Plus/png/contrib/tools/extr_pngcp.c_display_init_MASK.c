
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct display {char* operation; char* filename; char* output_file; int min_windowBits; scalar_t__ text_stashed; scalar_t__ num_text; int * text_ptr; int * write_pp; int * ip; int * read_pp; int * fp; int options; } ;


 int VAR_0 ;
 int FUNC_0 (struct display*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct display *VAR_1)




{
   FUNC_0(VAR_1, 0, sizeof *VAR_1);
   VAR_1->operation = "internal error";
   VAR_1->filename = "command line";
   VAR_1->output_file = "no output file";
   VAR_1->options = VAR_0;
   VAR_1->fp = ((void*)0);
   VAR_1->read_pp = ((void*)0);
   VAR_1->ip = ((void*)0);
   VAR_1->write_pp = ((void*)0);
   VAR_1->min_windowBits = -1;





}
