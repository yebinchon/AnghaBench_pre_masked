
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tvnorm {int std; char b; char c; char e; int name; } ;
struct tda9887_priv {char* data; scalar_t__ mode; scalar_t__ audmode; int std; } ;
struct dvb_frontend {struct tda9887_priv* analog_demod_priv; } ;


 int FUNC_0 (struct tvnorm*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct tvnorm VAR_2 ;
 struct tvnorm VAR_3 ;
 int FUNC_1 (char*,...) ;
 struct tvnorm* VAR_4 ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_5)
{
 struct tda9887_priv *VAR_6 = VAR_5->analog_demod_priv;
 struct tvnorm *VAR_7 = ((void*)0);
 char *VAR_8 = VAR_6->data;
 int VAR_9;

 if (VAR_6->mode == VAR_1) {
  if (VAR_6->audmode == VAR_0)
   VAR_7 = &VAR_2;
  else
   VAR_7 = &VAR_3;
 } else {
  for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_4); VAR_9++) {
   if (VAR_4[VAR_9].std & VAR_6->std) {
    VAR_7 = VAR_4+VAR_9;
    break;
   }
  }
 }
 if (((void*)0) == VAR_7) {
  FUNC_1("Unsupported tvnorm entry - audio muted\n");
  return -1;
 }

 FUNC_1("configure for: %s\n", VAR_7->name);
 VAR_8[1] = VAR_7->b;
 VAR_8[2] = VAR_7->c;
 VAR_8[3] = VAR_7->e;
 return 0;
}
