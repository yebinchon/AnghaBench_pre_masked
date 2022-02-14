
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct property {unsigned int length; scalar_t__ value; } ;
struct nx_of {int flags; TYPE_1__*** ap; } ;
struct msc_triplet {int keybitlen; int sglen; int databytelen; } ;
struct max_sync_cop {unsigned int triplets; scalar_t__ fc; scalar_t__ mode; struct msc_triplet* trip; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int sglen; int databytelen; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct device*,char*,size_t,...) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_6,
        struct property *VAR_7,
        struct nx_of *VAR_8)
{
 struct msc_triplet *VAR_9;
 struct max_sync_cop *VAR_10;
 unsigned int VAR_11, VAR_12, VAR_13;

 VAR_10 = (struct max_sync_cop *)VAR_7->value;
 VAR_13 = VAR_7->length;





 VAR_11 = 0;

 while ((VAR_11 + sizeof(struct max_sync_cop)) <= VAR_13) {
  VAR_11 += sizeof(struct max_sync_cop);

  VAR_9 = VAR_10->trip;

  for (VAR_12 = 0;
       ((VAR_11 + sizeof(struct msc_triplet)) <= VAR_13) &&
       VAR_12 < VAR_10->triplets;
       VAR_12++) {
   if (VAR_10->fc > VAR_3 || VAR_10->mode > VAR_4) {
    FUNC_0(VAR_6, "unknown function code/mode "
     "combo: %d/%d (ignored)\n", VAR_10->fc,
     VAR_10->mode);
    goto next_loop;
   }

   switch (VAR_9->keybitlen) {
   case 128:
   case 160:
    VAR_8->ap[VAR_10->fc][VAR_10->mode][0].databytelen =
     VAR_9->databytelen;
    VAR_8->ap[VAR_10->fc][VAR_10->mode][0].sglen =
     VAR_9->sglen;
    break;
   case 192:
    VAR_8->ap[VAR_10->fc][VAR_10->mode][1].databytelen =
     VAR_9->databytelen;
    VAR_8->ap[VAR_10->fc][VAR_10->mode][1].sglen =
     VAR_9->sglen;
    break;
   case 256:
    if (VAR_10->fc == VAR_0) {
     VAR_8->ap[VAR_10->fc][VAR_10->mode][2].
      databytelen = VAR_9->databytelen;
     VAR_8->ap[VAR_10->fc][VAR_10->mode][2].sglen =
      VAR_9->sglen;
    } else if (VAR_10->fc == VAR_1 ||
        VAR_10->fc == VAR_2) {
     VAR_8->ap[VAR_10->fc][VAR_10->mode][1].
      databytelen = VAR_9->databytelen;
     VAR_8->ap[VAR_10->fc][VAR_10->mode][1].sglen =
      VAR_9->sglen;
    } else {
     FUNC_1(VAR_6, "unknown function "
      "code/key bit len combo"
      ": (%u/256)\n", VAR_10->fc);
    }
    break;
   case 512:
    VAR_8->ap[VAR_10->fc][VAR_10->mode][2].databytelen =
     VAR_9->databytelen;
    VAR_8->ap[VAR_10->fc][VAR_10->mode][2].sglen =
     VAR_9->sglen;
    break;
   default:
    FUNC_1(VAR_6, "unknown function code/key bit "
      "len combo: (%u/%u)\n", VAR_10->fc,
      VAR_9->keybitlen);
    break;
   }
next_loop:
   VAR_11 += sizeof(struct msc_triplet);
   VAR_9++;
  }

  VAR_10 = (struct max_sync_cop *)VAR_9;
 }

 VAR_8->flags |= VAR_5;
}
