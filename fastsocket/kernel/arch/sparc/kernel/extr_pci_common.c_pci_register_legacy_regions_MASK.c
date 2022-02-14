
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {char* name; void* flags; scalar_t__ start; scalar_t__ end; } ;


 int VAR_0 ;
 void* VAR_1 ;
 struct resource* FUNC_0 (int,int ) ;
 int FUNC_1 (struct resource*,struct resource*) ;

__attribute__((used)) static void FUNC_2(struct resource *VAR_2,
     struct resource *VAR_3)
{
 struct resource *VAR_4;


 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return;

 VAR_4->name = "Video RAM area";
 VAR_4->start = VAR_3->start + 0xa0000UL;
 VAR_4->end = VAR_4->start + 0x1ffffUL;
 VAR_4->flags = VAR_1;
 FUNC_1(VAR_3, VAR_4);

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return;

 VAR_4->name = "System ROM";
 VAR_4->start = VAR_3->start + 0xf0000UL;
 VAR_4->end = VAR_4->start + 0xffffUL;
 VAR_4->flags = VAR_1;
 FUNC_1(VAR_3, VAR_4);

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return;

 VAR_4->name = "Video ROM";
 VAR_4->start = VAR_3->start + 0xc0000UL;
 VAR_4->end = VAR_4->start + 0x7fffUL;
 VAR_4->flags = VAR_1;
 FUNC_1(VAR_3, VAR_4);
}
