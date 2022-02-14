
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_8__ {int len; scalar_t__ buff; } ;
struct TYPE_11__ {char* buff; } ;
struct TYPE_10__ {unsigned int len; TYPE_2__* items; } ;
struct TYPE_12__ {TYPE_1__ binary; scalar_t__ uint_; TYPE_4__ string; TYPE_3__ map; } ;
struct rmsgpack_dom_value {scalar_t__ type; TYPE_5__ val; } ;
typedef int libretrodb_cursor_t ;
struct TYPE_13__ {int analog_supported; int rumble_supported; int coop_supported; unsigned int edge_magazine_rating; unsigned int edge_magazine_issue; unsigned int famitsu_magazine_rating; unsigned int tgdb_rating; unsigned int max_users; unsigned int releasemonth; unsigned int releaseyear; unsigned int size; void* md5; void* sha1; int crc32; void* edge_magazine_review; void* enhancement_hw; void* pegi_rating; void* cero_rating; void* elspa_rating; void* esrb_rating; void* bbfc_rating; void* franchise; void* origin; void* genre; void* description; void* name; void* rom_name; void* serial; int developer; void* publisher; } ;
typedef TYPE_6__ database_info_t ;
struct TYPE_9__ {struct rmsgpack_dom_value value; struct rmsgpack_dom_value key; } ;


 int FUNC_0 (char*,char const*) ;
 scalar_t__ VAR_0 ;
 void* FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,struct rmsgpack_dom_value*) ;
 int FUNC_3 (struct rmsgpack_dom_value*) ;
 void* FUNC_4 (char const*) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 int FUNC_7 (char const*,char*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(libretrodb_cursor_t *VAR_1,
      database_info_t *VAR_2)
{
   unsigned VAR_3;
   struct rmsgpack_dom_value VAR_4;
   const char* VAR_5 = ((void*)0);

   if (FUNC_2(VAR_1, &VAR_4) != 0)
      return -1;

   if (VAR_4.type != VAR_0)
   {
      FUNC_3(&VAR_4);
      return 1;
   }

   VAR_2->analog_supported = -1;
   VAR_2->rumble_supported = -1;
   VAR_2->coop_supported = -1;

   for (VAR_3 = 0; VAR_3 < VAR_4.val.map.len; VAR_3++)
   {
      struct rmsgpack_dom_value *VAR_6 = &VAR_4.val.map.items[VAR_3].key;
      struct rmsgpack_dom_value *VAR_7 = &VAR_4.val.map.items[VAR_3].value;
      const char *VAR_8 = ((void*)0);

      if (!VAR_6 || !VAR_7)
         continue;

      VAR_8 = VAR_7->val.string.buff;
      VAR_5 = VAR_6->val.string.buff;

      if (FUNC_6(VAR_5, "publisher"))
      {
         if (!FUNC_5(VAR_8))
            VAR_2->publisher = FUNC_4(VAR_8);
      }
      else if (FUNC_6(VAR_5, "developer"))
      {
         if (!FUNC_5(VAR_8))
            VAR_2->developer = FUNC_7(VAR_8, "|");
      }
      else if (FUNC_6(VAR_5, "serial"))
      {
         if (!FUNC_5(VAR_8))
            VAR_2->serial = FUNC_4(VAR_8);
      }
      else if (FUNC_6(VAR_5, "rom_name"))
      {
         if (!FUNC_5(VAR_8))
            VAR_2->rom_name = FUNC_4(VAR_8);
      }
      else if (FUNC_6(VAR_5, "name"))
      {
         if (!FUNC_5(VAR_8))
            VAR_2->name = FUNC_4(VAR_8);
      }
      else if (FUNC_6(VAR_5, "description"))
      {
         if (!FUNC_5(VAR_8))
            VAR_2->description = FUNC_4(VAR_8);
      }
      else if (FUNC_6(VAR_5, "genre"))
      {
         if (!FUNC_5(VAR_8))
            VAR_2->genre = FUNC_4(VAR_8);
      }
      else if (FUNC_6(VAR_5, "origin"))
      {
         if (!FUNC_5(VAR_8))
            VAR_2->origin = FUNC_4(VAR_8);
      }
      else if (FUNC_6(VAR_5, "franchise"))
      {
         if (!FUNC_5(VAR_8))
            VAR_2->franchise = FUNC_4(VAR_8);
      }
      else if (FUNC_6(VAR_5, "bbfc_rating"))
      {
         if (!FUNC_5(VAR_8))
            VAR_2->bbfc_rating = FUNC_4(VAR_8);
      }
      else if (FUNC_6(VAR_5, "esrb_rating"))
      {
         if (!FUNC_5(VAR_8))
            VAR_2->esrb_rating = FUNC_4(VAR_8);
      }
      else if (FUNC_6(VAR_5, "elspa_rating"))
      {
         if (!FUNC_5(VAR_8))
            VAR_2->elspa_rating = FUNC_4(VAR_8);
      }
      else if (FUNC_6(VAR_5, "cero_rating"))
      {
         if (!FUNC_5(VAR_8))
            VAR_2->cero_rating = FUNC_4(VAR_8);
      }
      else if (FUNC_6(VAR_5, "pegi_rating"))
      {
         if (!FUNC_5(VAR_8))
            VAR_2->pegi_rating = FUNC_4(VAR_8);
      }
      else if (FUNC_6(VAR_5, "enhancement_hw"))
      {
         if (!FUNC_5(VAR_8))
            VAR_2->enhancement_hw = FUNC_4(VAR_8);
      }
      else if (FUNC_6(VAR_5, "edge_review"))
      {
         if (!FUNC_5(VAR_8))
            VAR_2->edge_magazine_review = FUNC_4(VAR_8);
      }
      else if (FUNC_6(VAR_5, "edge_rating"))
         VAR_2->edge_magazine_rating = (unsigned)VAR_7->val.uint_;
      else if (FUNC_6(VAR_5, "edge_issue"))
         VAR_2->edge_magazine_issue = (unsigned)VAR_7->val.uint_;
      else if (FUNC_6(VAR_5, "famitsu_rating"))
         VAR_2->famitsu_magazine_rating = (unsigned)VAR_7->val.uint_;
      else if (FUNC_6(VAR_5, "tgdb_rating"))
         VAR_2->tgdb_rating = (unsigned)VAR_7->val.uint_;
      else if (FUNC_6(VAR_5, "users"))
         VAR_2->max_users = (unsigned)VAR_7->val.uint_;
      else if (FUNC_6(VAR_5, "releasemonth"))
         VAR_2->releasemonth = (unsigned)VAR_7->val.uint_;
      else if (FUNC_6(VAR_5, "releaseyear"))
         VAR_2->releaseyear = (unsigned)VAR_7->val.uint_;
      else if (FUNC_6(VAR_5, "rumble"))
         VAR_2->rumble_supported = (int)VAR_7->val.uint_;
      else if (FUNC_6(VAR_5, "coop"))
         VAR_2->coop_supported = (int)VAR_7->val.uint_;
      else if (FUNC_6(VAR_5, "analog"))
         VAR_2->analog_supported = (int)VAR_7->val.uint_;
      else if (FUNC_6(VAR_5, "size"))
         VAR_2->size = (unsigned)VAR_7->val.uint_;
      else if (FUNC_6(VAR_5, "crc"))
         VAR_2->crc32 = FUNC_8(
               *(uint32_t*)VAR_7->val.binary.buff);
      else if (FUNC_6(VAR_5, "sha1"))
         VAR_2->sha1 = FUNC_1(
               (uint8_t*)VAR_7->val.binary.buff, VAR_7->val.binary.len);
      else if (FUNC_6(VAR_5, "md5"))
         VAR_2->md5 = FUNC_1(
               (uint8_t*)VAR_7->val.binary.buff, VAR_7->val.binary.len);
      else
      {
         FUNC_0("Unknown key: %s\n", VAR_5);
      }
   }

   FUNC_3(&VAR_4);

   return 0;
}
