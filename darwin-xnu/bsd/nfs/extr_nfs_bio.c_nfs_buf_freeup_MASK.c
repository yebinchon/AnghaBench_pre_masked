
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {scalar_t__ tv_sec; } ;
struct nfsbuffreehead {int dummy; } ;
struct TYPE_2__ {scalar_t__ le_next; } ;
struct nfsbuf {scalar_t__ nb_timestamp; int nb_bufsize; scalar_t__ nb_data; int nb_flags; int nb_wcred; int nb_rcred; int * nb_np; TYPE_1__ nb_vnbufs; scalar_t__ nb_refs; } ;


 int FUNC_0 (struct nfsbuf*,int ) ;
 int FUNC_1 (int,scalar_t__,int,int,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct nfsbuf*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (struct nfsbuf*) ;
 int VAR_5 ;
 int FUNC_6 () ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 struct nfsbuf* FUNC_7 (struct nfsbuffreehead*) ;
 int FUNC_8 (struct nfsbuffreehead*) ;
 int FUNC_9 (struct nfsbuffreehead*,struct nfsbuf*,int ) ;
 int FUNC_10 (struct nfsbuffreehead*,struct nfsbuf*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (scalar_t__,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct timeval*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_16 (struct nfsbuf*) ;
 scalar_t__ VAR_13 ;
 struct nfsbuffreehead VAR_14 ;
 int VAR_15 ;
 struct nfsbuffreehead VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;

void
FUNC_17(int VAR_20)
{
 struct nfsbuf *VAR_21;
 struct timeval VAR_22;
 int VAR_23;
 struct nfsbuffreehead VAR_24;

 FUNC_8(&VAR_24);

 FUNC_13(VAR_12);

 FUNC_15(&VAR_22);

 FUNC_1(320, VAR_13, VAR_15, VAR_17, 0);

 VAR_23 = VAR_20 ? VAR_15/VAR_0 : VAR_1;
 while ((VAR_13 > VAR_19) && (VAR_23-- > 0)) {
  VAR_21 = FUNC_7(&VAR_14);
  if (!VAR_21)
   break;
  if (VAR_21->nb_refs)
   break;
  if (FUNC_5(VAR_21) &&
      (VAR_21->nb_timestamp + (2*VAR_6)) > VAR_22.tv_sec)
   break;
  FUNC_16(VAR_21);

  if (VAR_21->nb_np) {
   if (VAR_21->nb_vnbufs.le_next != VAR_8) {
    FUNC_4(VAR_21, VAR_11);
    VAR_21->nb_vnbufs.le_next = VAR_8;
   }
   VAR_21->nb_np = ((void*)0);
  }
  FUNC_4(VAR_21, VAR_10);
  FUNC_9(&VAR_24, VAR_21, VAR_9);
  VAR_13--;
 }

 VAR_23 = VAR_20 ? VAR_17/VAR_2 : VAR_3;
 while ((VAR_13 > VAR_19) && (VAR_23-- > 0)) {
  VAR_21 = FUNC_7(&VAR_16);
  if (!VAR_21)
   break;
  if (VAR_21->nb_refs)
   break;
  if (FUNC_5(VAR_21) &&
      (VAR_21->nb_timestamp + (2*VAR_7)) > VAR_22.tv_sec)
   break;
  FUNC_16(VAR_21);

  if (VAR_21->nb_np) {
   if (VAR_21->nb_vnbufs.le_next != VAR_8) {
    FUNC_4(VAR_21, VAR_11);
    VAR_21->nb_vnbufs.le_next = VAR_8;
   }
   VAR_21->nb_np = ((void*)0);
  }
  FUNC_4(VAR_21, VAR_10);
  FUNC_9(&VAR_24, VAR_21, VAR_9);
  VAR_13--;
  VAR_18--;
 }

 FUNC_1(320, VAR_13, VAR_15, VAR_17, 0);
 FUNC_6();

 FUNC_14(VAR_12);

 while ((VAR_21 = FUNC_7(&VAR_24))) {
  FUNC_10(&VAR_24, VAR_21, VAR_9);

  if (FUNC_3(VAR_21->nb_rcred))
   FUNC_11(&VAR_21->nb_rcred);
  if (FUNC_3(VAR_21->nb_wcred))
   FUNC_11(&VAR_21->nb_wcred);

  if (FUNC_2(VAR_21->nb_flags, VAR_5) && VAR_21->nb_data)
   FUNC_12(VAR_21->nb_data, VAR_21->nb_bufsize);
  FUNC_0(VAR_21, VAR_4);
 }

}
