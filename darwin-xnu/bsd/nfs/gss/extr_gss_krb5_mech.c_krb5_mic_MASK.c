
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef TYPE_2__* gss_buffer_t ;
typedef TYPE_3__* crypto_ctx_t ;
struct TYPE_16__ {int output_size; } ;
struct TYPE_13__ {void** ikey; } ;
struct TYPE_15__ {int flags; int digest_size; TYPE_8__* di; int keylen; void** ckey; TYPE_1__ ks; int lock; } ;
struct TYPE_14__ {int value; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_8__*,int ) ;
 int FUNC_2 (TYPE_8__*,int ,int *) ;
 int FUNC_3 (TYPE_8__*,int ,int ,void*) ;
 int FUNC_4 (TYPE_8__*,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *,int *,int ) ;
 int FUNC_8 (int *,int *,int ) ;

int
FUNC_9(crypto_ctx_t VAR_4, gss_buffer_t VAR_5, gss_buffer_t VAR_6, gss_buffer_t VAR_7, uint8_t *VAR_8, int *VAR_9, int VAR_10, int VAR_11)
{
 uint8_t VAR_12[VAR_4->di->output_size];
 FUNC_1(VAR_4->di, VAR_3);
 int VAR_13 = (VAR_9 == ((void*)0)) ? (VAR_11 ? VAR_1 : VAR_2) : (VAR_11 ? VAR_2 : VAR_1);
 void *VAR_14;

 if (VAR_10) {
  if (!(VAR_4->flags & VAR_0)) {
   FUNC_5(VAR_4->lock);
   if (!(VAR_4->flags & VAR_0)) {
    FUNC_0(VAR_4);
   }
   VAR_4->flags |= VAR_0;
   FUNC_6(VAR_4->lock);
  }
  VAR_14 = VAR_4->ks.ikey[VAR_13];
 } else {
  VAR_14 = VAR_4->ckey[VAR_13];
 }

 FUNC_3(VAR_4->di, VAR_3, VAR_4->keylen, VAR_14);

 if (VAR_5) {
  FUNC_4(VAR_4->di, VAR_3, VAR_5->length, VAR_5->value);
 }

 FUNC_4(VAR_4->di, VAR_3, VAR_6->length, VAR_6->value);

 if (VAR_7) {
  FUNC_4(VAR_4->di, VAR_3, VAR_7->length, VAR_7->value);
 }

 FUNC_2(VAR_4->di, VAR_3, VAR_12);

 if (VAR_9) {
   *VAR_9 = (FUNC_7(VAR_8, VAR_12, VAR_4->digest_size) == 0);
 }
 else
  FUNC_8(VAR_8, VAR_12, VAR_4->digest_size);

 return (0);
}
