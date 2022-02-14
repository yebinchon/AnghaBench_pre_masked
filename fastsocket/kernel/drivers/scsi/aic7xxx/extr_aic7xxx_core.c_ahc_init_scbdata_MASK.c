
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_data {int dummy; } ;
struct scb_data {scalar_t__ maxhscbs; scalar_t__ numscbs; struct scb* hscbs; int init_level; int sg_dmat; int sense_busaddr; struct scb* sense; int sense_dmamap; int sense_dmat; int hscb_busaddr; int hscb_dmamap; int hscb_dmat; struct scb* scbarray; int sg_maps; int free_scbs; } ;
struct scb {int dummy; } ;
struct hardware_scb {int dummy; } ;
struct ahc_softc {int next_queued_scb; int parent_dmat; struct scb_data* scb_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ahc_softc*) ;
 scalar_t__ FUNC_2 (struct ahc_softc*,int ,int,scalar_t__,scalar_t__,int ,int *,int *,int,int,int ,int ,int *) ;
 int VAR_10 ;
 int FUNC_3 (struct ahc_softc*,int ,int ,struct scb*,int,int ,int *,int ) ;
 scalar_t__ FUNC_4 (struct ahc_softc*,int ,void**,int ,int *) ;
 int FUNC_5 (struct ahc_softc*) ;
 char* FUNC_6 (struct ahc_softc*) ;
 scalar_t__ FUNC_7 (struct ahc_softc*) ;
 scalar_t__ FUNC_8 (int,int ,int ) ;
 int FUNC_9 (struct scb*,int ,int) ;
 int FUNC_10 (char*,char*) ;

__attribute__((used)) static int
FUNC_11(struct ahc_softc *VAR_11)
{
 struct scb_data *VAR_12;

 VAR_12 = VAR_11->scb_data;
 FUNC_0(&VAR_12->free_scbs);
 FUNC_0(&VAR_12->sg_maps);


 VAR_12->scbarray =
     (struct scb *)FUNC_8(sizeof(struct scb) * VAR_0,
     VAR_7, VAR_8);
 if (VAR_12->scbarray == ((void*)0))
  return (VAR_5);
 FUNC_9(VAR_12->scbarray, 0, sizeof(struct scb) * VAR_0);



 VAR_12->maxhscbs = FUNC_7(VAR_11);
 if (VAR_11->scb_data->maxhscbs == 0) {
  FUNC_10("%s: No SCB space found\n", FUNC_6(VAR_11));
  return (VAR_6);
 }
 if (FUNC_2(VAR_11, VAR_11->parent_dmat, 1,
                      VAR_3 + 1,
                     VAR_3,
                      VAR_2,
                    ((void*)0), ((void*)0),
          VAR_0 * sizeof(struct hardware_scb),
                       1,
                      VAR_4,
                   0, &VAR_12->hscb_dmat) != 0) {
  goto error_exit;
 }

 VAR_12->init_level++;


 if (FUNC_4(VAR_11, VAR_12->hscb_dmat,
        (void **)&VAR_12->hscbs,
        VAR_1, &VAR_12->hscb_dmamap) != 0) {
  goto error_exit;
 }

 VAR_12->init_level++;


 FUNC_3(VAR_11, VAR_12->hscb_dmat, VAR_12->hscb_dmamap,
   VAR_12->hscbs,
   VAR_0 * sizeof(struct hardware_scb),
   VAR_10, &VAR_12->hscb_busaddr, 0);

 VAR_12->init_level++;


 if (FUNC_2(VAR_11, VAR_11->parent_dmat, 1,
                      VAR_3 + 1,
                     VAR_3,
                      VAR_2,
                    ((void*)0), ((void*)0),
          VAR_0 * sizeof(struct scsi_sense_data),
                       1,
                      VAR_4,
                   0, &VAR_12->sense_dmat) != 0) {
  goto error_exit;
 }

 VAR_12->init_level++;


 if (FUNC_4(VAR_11, VAR_12->sense_dmat,
        (void **)&VAR_12->sense,
        VAR_1, &VAR_12->sense_dmamap) != 0) {
  goto error_exit;
 }

 VAR_12->init_level++;


 FUNC_3(VAR_11, VAR_12->sense_dmat, VAR_12->sense_dmamap,
   VAR_12->sense,
   VAR_0 * sizeof(struct scsi_sense_data),
   VAR_10, &VAR_12->sense_busaddr, 0);

 VAR_12->init_level++;


 if (FUNC_2(VAR_11, VAR_11->parent_dmat, 8,
                      VAR_3 + 1,
                     VAR_3,
                      VAR_2,
                    ((void*)0), ((void*)0),
          VAR_9, 1,
                      VAR_4,
                   0, &VAR_12->sg_dmat) != 0) {
  goto error_exit;
 }

 VAR_12->init_level++;


 FUNC_9(VAR_12->hscbs, 0,
        VAR_0 * sizeof(struct hardware_scb));
 FUNC_1(VAR_11);

 if (VAR_12->numscbs == 0) {
  FUNC_10("%s: ahc_init_scbdata - "
         "Unable to allocate initial scbs\n",
         FUNC_6(VAR_11));
  goto error_exit;
 }




 VAR_11->next_queued_scb = FUNC_5(VAR_11);




 return (0);

error_exit:

 return (VAR_5);
}
