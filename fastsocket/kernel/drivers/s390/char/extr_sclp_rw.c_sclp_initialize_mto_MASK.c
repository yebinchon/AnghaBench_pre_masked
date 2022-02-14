
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; } ;
struct write_sccb {TYPE_1__ header; } ;
struct sclp_buffer {char* current_line; scalar_t__ current_length; struct write_sccb* sccb; } ;
struct mto {int length; int type; int line_type_flags; } ;
typedef int addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mto*,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct sclp_buffer *VAR_3, int VAR_4)
{
 struct write_sccb *VAR_5;
 struct mto *VAR_6;
 int VAR_7;


 VAR_7 = sizeof(struct mto) + VAR_4;


 VAR_5 = VAR_3->sccb;
 if ((VAR_2 - VAR_5->header.length) < VAR_7)
  return -VAR_0;


 VAR_6 = (struct mto *)(((addr_t) VAR_5) + VAR_5->header.length);





 FUNC_0(VAR_6, 0, sizeof(struct mto));
 VAR_6->length = sizeof(struct mto);
 VAR_6->type = 4;
 VAR_6->line_type_flags = VAR_1;


 VAR_3->current_line = (char *) (VAR_6 + 1);
 VAR_3->current_length = 0;

 return 0;
}
