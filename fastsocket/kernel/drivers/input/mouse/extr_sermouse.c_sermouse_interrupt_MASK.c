
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sermouse {scalar_t__ type; scalar_t__ last; scalar_t__ count; } ;
struct serio {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct sermouse* FUNC_0 (struct serio*) ;
 int FUNC_1 (struct sermouse*,unsigned char) ;
 int FUNC_2 (struct sermouse*,unsigned char) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(struct serio *VAR_4,
  unsigned char VAR_5, unsigned int VAR_6)
{
 struct sermouse *VAR_7 = FUNC_0(VAR_4);

 if (FUNC_3(VAR_3, VAR_7->last + VAR_0/10))
  VAR_7->count = 0;

 VAR_7->last = VAR_3;

 if (VAR_7->type > VAR_2)
  FUNC_1(VAR_7, VAR_5);
 else
  FUNC_2(VAR_7, VAR_5);

 return VAR_1;
}
