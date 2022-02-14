
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct secasvar {scalar_t__ schedlen; int flags; scalar_t__ alg_enc; int * sched; int key_enc; } ;
struct esp_algorithm {scalar_t__ keymin; scalar_t__ keymax; int (* schedule ) (struct esp_algorithm const*,struct secasvar*) ;scalar_t__ (* schedlen ) (struct esp_algorithm const*) ;int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_7 (struct esp_algorithm const*) ;
 int FUNC_8 (struct esp_algorithm const*,struct secasvar*) ;

int
FUNC_9(const struct esp_algorithm *VAR_9, struct secasvar *VAR_10)
{
 int VAR_11;


 if (FUNC_1(VAR_10->key_enc) < VAR_9->keymin ||
     FUNC_1(VAR_10->key_enc) > VAR_9->keymax) {
  FUNC_4((VAR_2,
      "esp_schedule %s: unsupported key length %d: "
      "needs %d to %d bits\n", VAR_9->name, FUNC_1(VAR_10->key_enc),
      VAR_9->keymin, VAR_9->keymax));
  return VAR_0;
 }

 FUNC_5(VAR_8);

 if (VAR_10->sched && VAR_10->schedlen != 0) {
  FUNC_6(VAR_8);
  return 0;
 }


 if (((VAR_10->flags & VAR_7) != 0) &&
  (VAR_10->alg_enc != VAR_5) &&
  (VAR_10->alg_enc != VAR_6)) {
  FUNC_4((VAR_2,
      "esp_schedule %s: implicit IV not allowed\n",
   VAR_9->name));
  FUNC_6(VAR_8);
  return VAR_0;
 }


 if (!VAR_9->schedule || !VAR_9->schedlen) {
  FUNC_6(VAR_8);
  return 0;
 }

 VAR_10->schedlen = (*VAR_9->schedlen)(VAR_9);
 if ((signed) VAR_10->schedlen < 0) {
  FUNC_6(VAR_8);
  return VAR_0;
 }


 VAR_10->sched = FUNC_2(VAR_10->schedlen, VAR_4, VAR_3);
 if (!VAR_10->sched) {
  VAR_10->schedlen = 0;
  FUNC_6(VAR_8);
  return VAR_1;
 }

 VAR_11 = (*VAR_9->schedule)(VAR_9, VAR_10);
 if (VAR_11) {
  FUNC_4((VAR_2, "esp_schedule %s: error %d\n",
      VAR_9->name, VAR_11));
  FUNC_3(VAR_10->sched, VAR_10->schedlen);
  FUNC_0(VAR_10->sched, VAR_4);
  VAR_10->sched = ((void*)0);
  VAR_10->schedlen = 0;
 }
 FUNC_6(VAR_8);
 return VAR_11;
}
