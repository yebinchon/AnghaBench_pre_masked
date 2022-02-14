
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int server_status; scalar_t__ warning_count; scalar_t__ query_status; int insert_id; scalar_t__ was_resultset; int affected_rows; scalar_t__ binary_encoded; } ;
struct TYPE_13__ {scalar_t__ rows; scalar_t__ bytes; TYPE_3__ qstat; TYPE_2__* result_queue; scalar_t__ rows_chunk_head; scalar_t__ row; scalar_t__ fields; } ;
typedef TYPE_4__ proxy_resultset_t ;
typedef int lua_State ;
typedef int gsize ;
struct TYPE_15__ {TYPE_4__* udata; } ;
struct TYPE_14__ {scalar_t__ len; scalar_t__ str; } ;
struct TYPE_11__ {TYPE_1__* head; } ;
struct TYPE_10__ {TYPE_5__* data; } ;
typedef TYPE_5__ GString ;
typedef TYPE_6__ GRef ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_1 (int *,int,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (int *,scalar_t__,scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int,char*) ;
 scalar_t__ FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (int *,TYPE_6__*) ;
 int FUNC_14 (int *,TYPE_6__*) ;
 int VAR_5 ;
 scalar_t__ FUNC_15 (char const*,int ,int ) ;

__attribute__((used)) static int FUNC_16(lua_State *VAR_6) {
 GRef *VAR_7 = *(GRef **)FUNC_2(VAR_6);
 proxy_resultset_t *VAR_8 = VAR_7->udata;
 gsize VAR_9 = 0;
 const char *VAR_10 = FUNC_1(VAR_6, 2, &VAR_9);

 if (FUNC_15(VAR_10, VAR_9, FUNC_0("fields"))) {
  if (!VAR_8->result_queue) {
   FUNC_3(VAR_6, ".resultset.fields isn't available if 'resultset_is_needed ~= true'");
  } else {
   if (0 != FUNC_12(VAR_8)) {

   }

   if (VAR_8->fields) {
    FUNC_13(VAR_6, VAR_7);
   } else {
    FUNC_9(VAR_6);
   }
  }
 } else if (FUNC_15(VAR_10, VAR_9, FUNC_0("rows"))) {
  if (!VAR_8->result_queue) {
   FUNC_3(VAR_6, ".resultset.rows isn't available if 'resultset_is_needed ~= true'");
  } else if (VAR_8->qstat.binary_encoded) {
   FUNC_3(VAR_6, ".resultset.rows isn't available for prepared statements");
  } else {
   FUNC_12(VAR_8);

   if (VAR_8->rows_chunk_head) {
    VAR_8->row = VAR_8->rows_chunk_head;

    FUNC_14(VAR_6, VAR_7);

    FUNC_6(VAR_6, VAR_5, 1);
   } else {
    FUNC_9(VAR_6);
   }
  }
 } else if (FUNC_15(VAR_10, VAR_9, FUNC_0("row_count"))) {
  FUNC_7(VAR_6, VAR_8->rows);
 } else if (FUNC_15(VAR_10, VAR_9, FUNC_0("bytes"))) {
  FUNC_7(VAR_6, VAR_8->bytes);
 } else if (FUNC_15(VAR_10, VAR_9, FUNC_0("raw"))) {
  if (!VAR_8->result_queue) {
   FUNC_3(VAR_6, ".resultset.raw isn't available if 'resultset_is_needed ~= true'");
  } else {
   GString *VAR_11;
   VAR_11 = VAR_8->result_queue->head->data;
   FUNC_8(VAR_6, VAR_11->str + 4, VAR_11->len - 4);
  }
 } else if (FUNC_15(VAR_10, VAR_9, FUNC_0("flags"))) {
  FUNC_4(VAR_6);
  FUNC_5(VAR_6, (VAR_8->qstat.server_status & VAR_4) != 0);
  FUNC_11(VAR_6, -2, "in_trans");

  FUNC_5(VAR_6, (VAR_8->qstat.server_status & VAR_3) != 0);
  FUNC_11(VAR_6, -2, "auto_commit");

  FUNC_5(VAR_6, (VAR_8->qstat.server_status & VAR_1) != 0);
  FUNC_11(VAR_6, -2, "no_good_index_used");

  FUNC_5(VAR_6, (VAR_8->qstat.server_status & VAR_2) != 0);
  FUNC_11(VAR_6, -2, "no_index_used");
 } else if (FUNC_15(VAR_10, VAR_9, FUNC_0("warning_count"))) {
  FUNC_7(VAR_6, VAR_8->qstat.warning_count);
 } else if (FUNC_15(VAR_10, VAR_9, FUNC_0("affected_rows"))) {




  if (VAR_8->qstat.was_resultset) {
   FUNC_9(VAR_6);
  } else {
   FUNC_10(VAR_6, VAR_8->qstat.affected_rows);
  }
 } else if (FUNC_15(VAR_10, VAR_9, FUNC_0("insert_id"))) {
  if (VAR_8->qstat.was_resultset) {
   FUNC_9(VAR_6);
  } else {
   FUNC_10(VAR_6, VAR_8->qstat.insert_id);
  }
 } else if (FUNC_15(VAR_10, VAR_9, FUNC_0("query_status"))) {



  if (VAR_8->qstat.query_status == VAR_0) {
   FUNC_9(VAR_6);
  } else {
   FUNC_7(VAR_6, VAR_8->qstat.query_status);
  }
 } else {
  FUNC_9(VAR_6);
 }

 return 1;
}
